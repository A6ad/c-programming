import time
import sys

def loading_simulation():
    print("Downloading files...")
    for i in range(101):
        # Print loading percentage
        sys.stdout.write(f'\rLoading... {i}%')
        sys.stdout.flush()
        time.sleep(0.1)  # Simulate time taken to load  
    print("\nDownload complete!")

loading_simulation()
 