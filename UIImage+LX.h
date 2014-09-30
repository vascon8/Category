//
//  UIImage+LX.h
//  0926新浪微博
//
//  Created by xinliu on 14-9-27.
//  Copyright (c) 2014年 xinliu. All rights reserved.
//

#import <UIKit/UIKit.h>

#define IOS7 ([[UIDevice currentDevice].systemVersion doubleValue] >= 7.0)

@interface UIImage (LX)

+ (UIImage *)imageWithName:(NSString *)imageName;
+ (UIImage *)resizedImage:(UIImage *)image;

@end
