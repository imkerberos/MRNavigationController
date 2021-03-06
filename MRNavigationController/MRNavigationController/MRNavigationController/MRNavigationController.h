//
//  MRNavigationController.h
//  MRNavigationController
//
//  Created by Martin Rybak on 9/3/13.
//  Copyright (c) 2013 Martin Rybak. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MRNavigationController : UINavigationController <UINavigationControllerDelegate>

- (id)initWithRootViewController:(UIViewController*)rootViewController navigationBarHidden:(BOOL)navigationBarHidden toolbarHidden:(BOOL)toolbarHidden;
- (void)pushViewController:(UIViewController*)viewController animated:(BOOL)animated navigationBarHidden:(BOOL)navigationBarHidden toolbarHidden:(BOOL)toolbarHidden push:(void(^)(void))onPush pop:(void(^)(void))onPop;

@end
