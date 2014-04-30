/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:41 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol PTSHUDControl
@property (assign,nonatomic,__weak) _UISettings* settings; 
@property (nonatomic,copy) NSString* valueKeyPath; 
@property (assign,nonatomic) int alignment; 
@property (assign,nonatomic) BOOL enabled; 
@required
-(void)setAlignment(int):arg1 ;
-(void)setEnabled(BOOL):arg1 ;
-(int)alignment;
-(void)setSettings(id):arg1 ;
-(id)settings;
-(BOOL)enabled;
-(void)setValueKeyPath(id):arg1 ;
-(id)valueKeyPath;
-(void)setAlignment(int):arg1 ;
-(void)setEnabled(BOOL):arg1 ;
-(int)alignment;
-(void)setSettings(id):arg1 ;
-(id)settings;
-(BOOL)enabled;
-(void)setValueKeyPath(id):arg1 ;
-(id)valueKeyPath;
@end

@protocol _UISettingsKeyPathObserver
@required
-(void)settings(id):arg1 changedValueForKeyPath(id):arg2 ;
-(void)settings(id):arg1 changedValueForKeyPath(id):arg2 ;
@end
