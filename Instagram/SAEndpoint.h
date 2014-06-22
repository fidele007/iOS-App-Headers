/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:53 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAAceSerializable.h>

@interface SAEndpoint : AceObject <SAAceSerializable> {
}
@property (nonatomic,copy) NSDictionary* operations; 
@property (nonatomic,copy) NSString* providerId; 
@property (assign,nonatomic) BOOL supportsAuthentication; 
+(id)endpoint;
+(id)endpointWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setOperations:(id)arg1;
-(void)setSupportsAuthentication:(BOOL)arg1;
-(void)setProviderId:(id)arg1;
-(id)encodedClassName;
@end