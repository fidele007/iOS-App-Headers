/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:02:49 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SESVerifyDomainDkimResponse : SESResponse {
	NSMutableArray* dkimTokens; 
}
@property (nonatomic,retain) NSMutableArray* dkimTokens; 
-(id)dkimTokensObjectAtIndex:(int)arg1;
-(void)setDkimTokens:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setException:(id)arg1;
@end