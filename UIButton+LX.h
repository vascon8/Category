//
//  UIButton+LX.h
//  UIButton
//
//  Created by xinliu on 14-9-28.
//  Copyright (c) 2014年 xinliu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (LX)

+ (instancetype)buttonWithImageOnTop:(UIImage *)image string:(NSString *)str font:(UIFont *)font borderHorizon:(CGFloat)borderHorizon borderVertical:(CGFloat)borderVertical imageMargin:(CGFloat)imageMargin stringMargin:(CGFloat)strMargin;
+ (instancetype)buttonWithImageOnRight:(UIImage *)image string:(NSString *)str font:(UIFont *)font borderHorizon:(CGFloat)borderHorizon borderVertical:(CGFloat)borderVertical imageMargin:(CGFloat)imageMargin stringMargin:(CGFloat)strMargin;

@end
