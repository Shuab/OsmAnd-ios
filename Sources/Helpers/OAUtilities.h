//
//  OAUtilities.h
//  OsmAnd
//
//  Created by Alexey Pelykh on 9/24/14.
//  Copyright (c) 2014 OsmAnd. All rights reserved.
//

#import <Foundation/Foundation.h>

//RGB color macro
#define UIColorFromRGB(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define UIColorFromRGBA(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF000000) >> 24))/255.0 \
green:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
blue:((float)((rgbValue & 0xFF00) >> 8 ))/255.0 \
alpha:((float)((rgbValue & 0xFF))/255.0)]

@interface OAUtilities : NSObject

+ (BOOL)iosVersionIsAtLeast:(NSString*)testVersion;
+ (BOOL)iosVersionIsExactly:(NSString*)testVersion;

+ (UIImage *)applyScaleFactorToImage:(UIImage *)image;
+ (NSString *)drawablePostfix;
+ (void)layoutComplexButton:(UIButton*)button;

+ (CGSize)calculateTextBounds:(NSString *)text width:(CGFloat)width font:(UIFont *)font;
+ (CGSize)calculateTextBounds:(NSString *)text width:(CGFloat)width height:(CGFloat)height font:(UIFont *)font;

+ (NSDictionary *)parseUrlQuery:(NSURL *)url;
+ (void)getHMS:(NSTimeInterval)timeInterval hours:(int*)hours minutes:(int*)minutes seconds:(int*)seconds;

+ (NSArray *) splitCoordinates:(NSString *)string;
+ (NSString *) floatToStrTrimZeros:(CGFloat)number;

+ (UIImage *)tintImageWithColor:(UIImage *)source color:(UIColor *)color;

+ (NSString *)colorToString:(UIColor *)color;
+ (UIColor *)colorFromString:(NSString *)colorStr;

+ (BOOL)doublesEqualUpToDigits:(int)digits source:(double)source destination:(double)destination;

+ (void)roundCornersOnView:(UIView *)view onTopLeft:(BOOL)tl topRight:(BOOL)tr bottomLeft:(BOOL)bl bottomRight:(BOOL)br radius:(CGFloat)radius;

@end
