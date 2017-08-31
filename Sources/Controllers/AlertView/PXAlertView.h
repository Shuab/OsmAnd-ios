//
//  PXAlertView.h
//  PXAlertViewDemo
//
//  Created by Alex Jarvis on 25/09/2013.
//  Copyright (c) 2013 Panaxiom Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^PXAlertViewCompletionBlock)(BOOL cancelled, NSInteger buttonIndex);

@interface PXAlertView : UIViewController

@property (nonatomic, getter = isVisible) BOOL visible;

+ (instancetype)showAlertWithTitle:(NSString *)title;

+ (instancetype)showAlertWithTitle:(NSString *)title
                           message:(NSString *)message;

+ (instancetype)showAlertWithTitle:(NSString *)title
                           message:(NSString *)message
                        completion:(PXAlertViewCompletionBlock)completion;

+ (instancetype)showAlertWithTitle:(NSString *)title
                           message:(NSString *)message
                       cancelTitle:(NSString *)cancelTitle
                        completion:(PXAlertViewCompletionBlock)completion;

+ (instancetype)showAlertWithTitle:(NSString *)title
                           message:(NSString *)message
                       cancelTitle:(NSString *)cancelTitle
                        otherTitle:(NSString *)otherTitle
                         otherDesc:(NSString *)otherDesc
                        otherImage:(NSString *)otherImage
                        completion:(PXAlertViewCompletionBlock)completion;

+ (instancetype)showAlertWithTitle:(NSString *)title
                           message:(NSString *)message
                       cancelTitle:(NSString *)cancelTitle
                        otherTitle:(NSString *)otherTitle
                         otherDesc:(NSString *)otherDesc
                        otherImage:(NSString *)otherImage
                buttonsShouldStack:(BOOL)shouldStack
                        completion:(PXAlertViewCompletionBlock)completion;

/**
 * @param otherTitles Must be a NSArray containing type NSString, or set to nil for no otherTitles.
 */
+ (instancetype)showAlertWithTitle:(NSString *)title
                           message:(NSString *)message
                       cancelTitle:(NSString *)cancelTitle
                       otherTitles:(NSArray *)otherTitles
                         otherDesc:(NSArray *)otherDesc
                       otherImages:(NSArray *)otherImages
                        completion:(PXAlertViewCompletionBlock)completion;


+ (instancetype)showAlertWithTitle:(NSString *)title
                           message:(NSString *)message
                       cancelTitle:(NSString *)cancelTitle
                        otherTitle:(NSString *)otherTitle
                         otherDesc:(NSString *)otherDesc
                        otherImage:(NSString *)otherImage
                       contentView:(UIView *)view
                        completion:(PXAlertViewCompletionBlock)completion;

+ (instancetype)showAlertWithTitle:(NSString *)title
                           message:(NSString *)message
                       cancelTitle:(NSString *)cancelTitle
                        otherTitle:(NSString *)otherTitle
                         otherDesc:(NSString *)otherDesc
                        otherImage:(NSString *)otherImage
                buttonsShouldStack:(BOOL)shouldStack
                       contentView:(UIView *)view
                        completion:(PXAlertViewCompletionBlock)completion;

/**
 * @param otherTitles Must be a NSArray containing type NSString, or set to nil for no otherTitles.
 */
+ (instancetype)showAlertWithTitle:(NSString *)title
                           message:(NSString *)message
                       cancelTitle:(NSString *)cancelTitle
                       otherTitles:(NSArray *)otherTitles
                         otherDesc:(NSArray *)otherDesc
                       otherImages:(NSArray *)otherImages
                       contentView:(UIView *)view
                        completion:(PXAlertViewCompletionBlock)completion;

/**
 * Adds a button to the receiver with the given title.
 * @param title The title of the new button
 * @return The index of the new button. Button indices start at 0 and increase in the order they are added.
 */
- (NSInteger)addButtonWithTitle:(NSString *)title cmdButton:(BOOL)cmdButton cancelButton:(BOOL)cancelButton imageName:(NSString *)imageName desc:(NSString *)desc;

/**
 * Dismisses the receiver, optionally with animation.
 */
- (void)dismissWithClickedButtonIndex:(NSInteger)buttonIndex animated:(BOOL)animated;

- (NSInteger)getCancelButtonIndex;

/**
 * By default the alert allows you to tap anywhere around the alert to dismiss it.
 * This method enables or disables this feature.
 */
- (void)setTapToDismissEnabled:(BOOL)enabled;

@end
