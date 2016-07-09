//
//  CHImageLoader.h
//  Project
//
//  Created by Chausson on 16/7/4.
//  Copyright © 2016年 Chausson. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^CHImageCompletionBlock)(UIImage *image, NSError *error, NSString *imageURL);
@interface CHImageLoader : NSObject

- (void)ch_setImageWithURL:(NSString *)url
                 imageView:(UIImageView *)view;
- (void)ch_setImageWithURL:(NSString *)url
                 imageView:(UIImageView *)view
          placeholderImage:(UIImage *)placeholder;
- (void)ch_setImageWithURL:(NSString *)url
                 imageView:(UIImageView *)view
                 completed:(CHImageCompletionBlock)completedBlock;
- (void)ch_setImageWithURL:(NSString *)url
                 imageView:(UIImageView *)view
          placeholderImage:(UIImage *)placeholder
                 completed:(CHImageCompletionBlock)completedBlock;
+ (UIImage *)ch_imageName:(NSString *)name isCache:(BOOL)cache;

@end
