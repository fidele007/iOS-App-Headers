/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:57 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPAppearance : NSObject {
	NSDictionary* _colorDictionary; 
}
@property (nonatomic,copy) NSDictionary* colorDictionary; 
@property (nonatomic,copy) UIColor* errorColor; 
+(id)sharedAppearance;
+(BOOL)resolveInstanceMethod:(SEL)arg1;
-(id)listBackgroundColor;
-(void)registerCustomUI;
-(id)spotifyHeaderButton;
-(id)spotifyPrimaryHeaderButton;
-(void)applyThemeAppearance;
-(id)configuredImageNamed:(id)arg1;
-(void)setUpTheme;
-(void)setupPopoverBarButtonItemAppearance;
-(void)setupIPhoneNavigationBarButtonItemAppearance;
-(void)setupIPhoneSearchBarButtonItemAppearance;
-(void)setupNavigationBarAppearance;
-(id)configuredImageNamed:(id)arg1 configName:(id)arg2;
-(id)buttonWithImageNamed:(id)arg1;
-(void)commonSetupForSpotifyActionButtton:(id)arg1;
-(id)barButtonItemWithImageNamed:(id)arg1;
-(id)resolveColor:(id)arg1;
-(id)resolveColorNoFallback:(id)arg1 reportErrors:(BOOL)arg2;
-(id)lookUpColorEntry:(id)arg1;
-(id)interpretColorSpecifier:(id)arg1 forKey:(id)arg2 reportErrors:(BOOL)arg3;
-(id)primarySpotifyActionButton;
-(id)secondarySpotifyActionButton;
-(id)spotifyBarButtonItem;
-(id)spotifyPrimaryBarButtonItem;
-(void).cxx_destruct;
@end