/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:49 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface UpsellRadioViewController : UpsellStandardViewController {
	SPTrack* _radioTrack; 
	NSString* _secondaryButtonTitle; 
	UIButton* _secondaryButton; 
	id<SPRadioManager> _radioManager; 
}
@property (nonatomic,retain) SPTrack* radioTrack; 				//@synthesize radioTrack=_radioTrack - In the implementation block
@property (nonatomic,copy) NSString* secondaryButtonTitle; 				//@synthesize secondaryButtonTitle=_secondaryButtonTitle - In the implementation block
@property (nonatomic,retain) UIButton* secondaryButton; 				//@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (assign,nonatomic,__weak) id<SPRadioManager> radioManager; 				//@synthesize radioManager=_radioManager - In the implementation block
-(id)viewEventURI;
-(void)setRadioManager:(id)arg1;
-(void)ta_pressSecondaryButton;
-(id)loadButtonContainerView;
-(id)mutableDictionaryWithRadioTAInterfaceData;
-(id)ta_RadioJSONDictionary;
-(id)ta_secondaryButtonTitle;
-(void)startRadio:(id)arg1;
-(id)initWithTitle:(id)arg1 withMessage:(id)arg2 withTrack:(id)arg3 withPrimaryButtonTitle:(id)arg4 withSecondaryButtonTitle:(id)arg5 withViewEventURI:(id)arg6 withLogCenter:(id)arg7 radioManager:(id)arg8;
-(void)setSecondaryButton:(id)arg1;
-(void)viewDidLoad;
-(void)setRadioTrack:(id)arg1;
-(void).cxx_destruct;
@end