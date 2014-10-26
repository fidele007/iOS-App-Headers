/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:38 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAFmfGeoFenceSet : SADomainCommand {
}
@property (nonatomic,copy) NSNumber* enable; 
@property (nonatomic,copy) NSString* fenceType; 
@property (nonatomic,retain) SAPerson* friend; 
@property (nonatomic,copy) NSString* geoFenceTrigger; 
@property (nonatomic,copy) NSNumber* oneTimeOnly; 
@property (nonatomic,retain) SALocation* requestedLocation; 
+(id)geoFenceSet;
+(id)geoFenceSetWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setEnable:(id)arg1;
-(void)setFriend:(id)arg1;
-(void)setRequestedLocation:(id)arg1;
-(void)setGeoFenceTrigger:(id)arg1;
-(void)setFenceType:(id)arg1;
-(void)setOneTimeOnly:(id)arg1;
@end