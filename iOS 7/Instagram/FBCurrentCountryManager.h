/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:20 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBCurrentCountryManager : NSObject {
	NSDictionary* _incorrectCountryMap; 
}
@property (nonatomic,copy) NSString* country; 
@property (nonatomic,retain) NSDictionary* incorrectCountryMap; 				//@synthesize incorrectCountryMap=_incorrectCountryMap - In the implementation block
+(id)sharedInstance;
-(void)setIncorrectCountryMap:(id)arg1;
-(id)_countryFromCarrier:(id)arg1;
-(id)init;
-(void).cxx_destruct;
@end