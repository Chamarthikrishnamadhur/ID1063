from PIL import Image

def convert_image_pillow(input_path, grayscale_path, bw_path, threshold=128):
    # Load the color JPEG image
    color_img = Image.open(input_path)
    
    # 1. Save as Grayscale (8-bit pixels, black and white)
    grayscale_img = color_img.convert('L')
    grayscale_img.save(grayscale_path, "JPEG")
    
    # 2. Save as true Black and White (1-bit pixels)
    # Using a point transformation ensures a clean threshold without dithering artifacts
    bw_img = grayscale_img.point(lambda x: 255 if x > threshold else 0, mode='1')
    bw_img.save(bw_path, "JPEG")

# Example Usage
convert_image_pillow("input.jpg", "output_grayscale.jpg", "output_bw.jpg")

