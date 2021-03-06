//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "MPDetailSliderDelegate.h"
#import "PHAudioPlayerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSLayoutConstraint, NSMutableArray, NSString, PHVoicemailSlider, UIButton, UIDateLabel, UIGestureRecognizer, UIImageView, UILabel, VMVoicemail;

@interface PHVoicemailCell : UITableViewCell <PHAudioPlayerDelegate, MPDetailSliderDelegate, UIGestureRecognizerDelegate>
{
    UIImageView *_unreadIndicatorView;
    UILabel *_nameLabel;
    UILabel *_labelLabel;
    UILabel *_durationLabel;
    UIDateLabel *_dateLabel;
    UILabel *_longDateLabel;
    UIButton *_playPauseButton;
    PHVoicemailSlider *_sliderView;
    UIButton *_speakerButton;
    UIButton *_callBackButton;
    UIButton *_deleteButton;
    UIButton *_infoButton;
    long long _createConstraintsOnceToken;
    NSMutableArray *_calculatedConstraints;
    NSMutableArray *_playbackConstraints;
    NSLayoutConstraint *_nameLabelYConstraint;
    NSLayoutConstraint *_labelLabelYConstraint;
    NSLayoutConstraint *_durationLabelEdgeConstraint;
    NSLayoutConstraint *_infoButtonXConstraint;
    NSLayoutConstraint *_infoButtonYConstraint;
    NSLayoutConstraint *_unreadIndicatorYConstraint;
    NSLayoutConstraint *_playPauseAndControlsYConstraint;
    NSLayoutConstraint *_buttonsYConstraint;
    NSLayoutConstraint *_unreadIndicatorXConstraint;
    NSLayoutConstraint *_expandedHeightConstraint;
    _Bool _animatingUpdateToUnreadIndicator;
    _Bool _shouldReupdateUnreadIndicator;
    _Bool _playWhenAvailable;
    _Bool _trackingTouchInCloseVoicemailArea;
    UIGestureRecognizer *_closeVoicemailGestureRecognizer;
    _Bool _showingPlayController;
    VMVoicemail *_voicemail;
    id <PHVoicemailCellConfigurationDelegate> _configurationDelegate;
    id <PHVoicemailCellDelegate> _delegate;
    NSString *_pickedRoute;
}

+ (id)grayColor;
+ (id)pauseImage;
+ (id)disabledPlayImage;
+ (id)playImage;
@property(getter=_nameLabel) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NSString *pickedRoute; // @synthesize pickedRoute=_pickedRoute;
@property(nonatomic) _Bool showingPlayController; // @synthesize showingPlayController=_showingPlayController;
@property(nonatomic) id <PHVoicemailCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <PHVoicemailCellConfigurationDelegate> configurationDelegate; // @synthesize configurationDelegate=_configurationDelegate;
@property(retain, nonatomic) VMVoicemail *voicemail; // @synthesize voicemail=_voicemail;
- (id)tableViewSeparatorColor;
- (void)trashButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)callButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)speakerButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)playPauseButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)_closeVoicemailFromGestureRecognizerTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_pointIsInsideCloseVoicemailRect:(struct CGPoint)arg1;
- (id)_automationID;
- (void)_updatePlayPauseButton;
- (void)_updateUnreadIndicatorAnimated:(_Bool)arg1;
- (void)_updateUI;
- (void)_updateDurationLabel;
- (void)_updateProx;
- (void)_updateSpeakerButton;
- (void)_updatePlaybackTimer;
- (void)layoutSubviews;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)_recalculateConstraints;
- (void)_updateConstraints;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)stoppedPlayingWithDataSource:(id)arg1 withError:(id)arg2;
- (void)updateWithElapsedTime:(double)arg1 playableTime:(double)arg2 totalTime:(double)arg3 isPlaying:(_Bool)arg4 isPlayable:(_Bool)arg5 dataSource:(id)arg6;
- (void)startedPlayingWithDataSource:(id)arg1;
- (void)_handleContentSizeDidChange:(id)arg1;
- (void)_deregisterForVoicemailNotifications;
- (void)_registerForVoicemailNotifications;
- (void)_handleAudioControllerChanged:(id)arg1;
- (void)_chooseDefaultRoute;
- (void)_handleVoicemailDataAvailableChanged:(id)arg1;
- (void)_handleVoicemailFlagsChanged:(id)arg1;
- (void)_handlePhoneAppAddressBookChanged:(id)arg1;
- (void)startPlaying;
- (void)customAccessoryButtonTapped:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)anchorPointForUpdateInWindow:(id)arg1;
- (void)setShowingPlayController:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_removePlayControls;
- (void)_addPlayControls;
@property(readonly) int audioButtonMode; // @dynamic audioButtonMode;
@property(readonly) _Bool unread; // @dynamic unread;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_updateFonts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

