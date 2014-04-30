/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:25 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3Permission : NSObject {
	NSString* xmlValue; 
}
+(id)readPermission;
+(id)writePermission;
+(id)readAcpPermission;
+(id)writeAcpPermission;
+(id)fullControlPermission;
+(id)permissionWithString:(id)arg1;
-(id)initWithXmlCode:(id)arg1;
-(void)dealloc;
-(id)description;
@end