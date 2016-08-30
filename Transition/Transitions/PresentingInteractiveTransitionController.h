//
//  PresentingInteractiveTransitionController.h
//  Transition
//
//  Created by Pablo Romero on 8/25/16.
//  Copyright © 2016 Pablo Romero. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PresntingInteractiveTransitionDelegate <NSObject>

- (void)presentViewController;

@end

@interface PresentingInteractiveTransitionController : UIPercentDrivenInteractiveTransition

@property(nonatomic, assign, readonly, getter=isInteractionInProgress) BOOL interactionInProgress;

- (void)wireToViewController:(UIViewController<PresntingInteractiveTransitionDelegate>*)viewController;

@end
