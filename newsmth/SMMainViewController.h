//
//  SMMainViewController.h
//  newsmth
//
//  Created by Maxwin on 13-6-11.
//  Copyright (c) 2013年 nju. All rights reserved.
//

#import "SMViewController.h"

@interface SMMainViewController : SMViewController

@property (strong, nonatomic) UIImage *topImage;

+(SMMainViewController *)instance;
- (void)setRootViewController:(UIViewController *)viewController;
- (void)setLeftVisiable:(BOOL)visiable;
@end