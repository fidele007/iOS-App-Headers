/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:42 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol TrialControllerDelegate
@optional
-(BOOL)trialControllerShouldShowTrialStarted(id):arg1 ;
-(BOOL)trialControllerShouldShowTrialEnded(id):arg1 ;
-(id)trialControllerTrialEndedViewController;
@end

@protocol PlaybackErrorControllerDelegate
@optional
-(id)playbackErrorPremiumUpsellViewController;
-(BOOL)playbackErrorDelegateShowUpsell(int):arg1 withTrack(id):arg2 ;
-(BOOL)playbackErrorShouldPreferDialogOverAlertBeforePremiumUpsell;
@end
