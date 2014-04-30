/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:26:12 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIAlertViewDelegate.h>

@interface GaiaSettingsSection : MultipleChoiceSettingsSection <UIAlertViewDelegate> {
	GaiaSettings* _gaiaSettings; 
	SPKVObservation* _selectedChoiceObservation; 
	int _currentSettingsOverwrite; 
}
@property (nonatomic,retain) GaiaSettings* gaiaSettings; 				//@synthesize gaiaSettings=_gaiaSettings - In the implementation block
@property (nonatomic,retain) SPKVObservation* selectedChoiceObservation; 				//@synthesize selectedChoiceObservation=_selectedChoiceObservation - In the implementation block
@property (nonatomic,copy) int currentSettingsOverwrite; 				//@synthesize currentSettingsOverwrite=_currentSettingsOverwrite - In the implementation block
-(int)numberOfChoices;
-(id)titleForChoiceIndex:(int)arg1;
-(id)subtitleForChoiceIndex:(int)arg1;
-(void)selectedChoiceIndexChanged;
-(void)setSelectedChoiceObservation:(id)arg1;
-(int)indexForSettingsValue:(int)arg1;
-(int)settingsValueForIndex:(int)arg1;
-(id)initWithGaiaSettings:(id)arg1 settingsViewController:(id)arg2;
-(void)setGaiaSettings:(id)arg1;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(id)footerText;
-(id)headerText;
-(void).cxx_destruct;
@end