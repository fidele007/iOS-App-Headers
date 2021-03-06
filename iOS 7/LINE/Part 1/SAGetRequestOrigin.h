/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:51 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SAGetRequestOrigin : SABaseClientBoundCommand {
}
@property (nonatomic,copy) NSString* desiredAccuracy; 
@property (nonatomic,copy) NSNumber* maxAge; 
@property (nonatomic,copy) NSNumber* searchTimeout; 
+(id)getRequestOrigin;
+(id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setDesiredAccuracy:(id)arg1;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setMaxAge:(id)arg1;
-(void)setSearchTimeout:(id)arg1;
@end