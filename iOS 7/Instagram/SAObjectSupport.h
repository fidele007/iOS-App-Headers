/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:00 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SAAceSerializable.h>

@interface SAObjectSupport : AceObject <SAAceSerializable> {
}
@property (nonatomic,copy) NSString* aceVersion; 
@property (nonatomic,copy) NSString* classId; 
@property (nonatomic,copy) NSString* groupId; 
@property (nonatomic,copy) NSArray* supportedProperties; 
+(id)objectSupport;
+(id)objectSupportWithDictionary:(id)arg1 context:(id)arg2;
-(id)groupIdentifier;
-(void)setGroupId:(id)arg1;
-(id)encodedClassName;
-(void)setAceVersion:(id)arg1;
-(void)setClassId:(id)arg1;
-(void)setSupportedProperties:(id)arg1;
@end