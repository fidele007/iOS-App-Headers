//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhoneNavigationController.h"

@class PHVoicemailListViewController, PHVoicemailNoContentViewController, PHVoicemailSetupViewController, TPAlertViewHelper;

@interface PHVoicemailNavigationController : PhoneNavigationController
{
    PHVoicemailListViewController *_inboxViewController;
    PHVoicemailListViewController *_trashViewController;
    PHVoicemailListViewController *_blockedViewController;
    PHVoicemailSetupViewController *_setupViewController;
    PHVoicemailNoContentViewController *_noContentViewController;
    TPAlertViewHelper *_mailboxFullAlertViewHelper;
    _Bool _active;
    _Bool _mailboxRequiresSetupPreviousValue;
    _Bool _sharedServiceIsSubscribedPreviousValue;
}

+ (CDStruct_5ec447a9)badge;
+ (id)tabBarIconName;
+ (id)tabBarIconImageSelected;
+ (id)tabBarIconImage;
+ (id)tabBarIconImageName;
+ (int)tabViewType;
@property _Bool sharedServiceIsSubscribedPreviousValue; // @synthesize sharedServiceIsSubscribedPreviousValue=_sharedServiceIsSubscribedPreviousValue;
@property _Bool mailboxRequiresSetupPreviousValue; // @synthesize mailboxRequiresSetupPreviousValue=_mailboxRequiresSetupPreviousValue;
- (void)_handleCTIndicatorsVoicemailNotification:(id)arg1;
- (void)_handleActiveNotification:(id)arg1;
- (void)_voicemailsAdded:(id)arg1;
- (void)_handleSuspend:(id)arg1;
- (void)_handleTaskEndedOrCancelled:(id)arg1;
- (void)_handleMessageWaitingStateChanged:(id)arg1;
- (void)_handleOnlineStateChanged:(id)arg1;
- (void)_handleStoreChanged:(id)arg1;
- (void)_handleSetupRequirementChanged:(id)arg1;
- (void)_playVoicemailSound;
- (void)_checkMailboxUsage;
- (void)_updateUIStateForce:(_Bool)arg1;
- (void)_updateUIState;
- (void)handleURL:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (_Bool)shouldSnapshot;

@end

