/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:21 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PTSDrillDownRowAction : PTSPushViewControllerRowAction {
	NSString* _settingsKeyPath; 
}
@property (nonatomic,copy) NSString* settingsKeyPath; 				//@synthesize settingsKeyPath=_settingsKeyPath - In the implementation block
+(id)actionWithSettingsKeyPath:(id)arg1;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1;
-(void)resolveTemplatesWithIndex:(unsigned)arg1;
-(void)setSettingsKeyPath:(id)arg1;
-(void).cxx_destruct;
@end