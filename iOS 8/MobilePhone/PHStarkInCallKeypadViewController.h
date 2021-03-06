//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHStarkGenericViewController.h"

@class DialerController, UIButton, UIView;

@interface PHStarkInCallKeypadViewController : PHStarkGenericViewController
{
    UIButton *_backButton;
    UIButton *_endButton;
    DialerController *_dialerController;
    UIView *_fakeNavigationBar;
    long long _currentHighlightedControlIndex;
}

@property long long currentHighlightedControlIndex; // @synthesize currentHighlightedControlIndex=_currentHighlightedControlIndex;
@property(retain) UIView *fakeNavigationBar; // @synthesize fakeNavigationBar=_fakeNavigationBar;
@property(retain) DialerController *dialerController; // @synthesize dialerController=_dialerController;
@property(retain) UIButton *endButton; // @synthesize endButton=_endButton;
@property(retain) UIButton *backButton; // @synthesize backButton=_backButton;
- (void)hardwareControlEventNotification:(id)arg1;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)endButtonTapped:(id)arg1;
- (void)backButtonTapped:(id)arg1;
- (void)loadView;
- (void)dealloc;

@end

