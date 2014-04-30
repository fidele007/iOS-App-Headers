/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:46 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPFeature.h>

@interface SPTShowcaseFeatureImplementation : NSObject <SPFeature> {
	id<BaseFeature> _baseUI; 
	id<LegacyFeature> _legacyFeature; 
	id<SettingsFeature> _settings; 
}
@property (assign,nonatomic,__weak) id<BaseFeature> baseUI; 				//@synthesize baseUI=_baseUI - In the implementation block
@property (assign,nonatomic,__weak) id<LegacyFeature> legacyFeature; 				//@synthesize legacyFeature=_legacyFeature - In the implementation block
@property (assign,nonatomic,__weak) id<SettingsFeature> settings; 				//@synthesize settings=_settings - In the implementation block
+(id)featureIdentifier;
+(id)featureDependencies;
-(void)configureWithFeatures:(id)arg1;
-(id)provideSettingsSectionForViewController:(id)arg1;
-(void)setLegacyFeature:(id)arg1;
-(void)setBaseUI:(id)arg1;
-(BOOL)isShowcaseEnabled;
-(void)displayShowcase:(id)arg1;
-(void)unload;
-(void)load;
-(void)setSettings:(id)arg1;
-(void).cxx_destruct;
@end