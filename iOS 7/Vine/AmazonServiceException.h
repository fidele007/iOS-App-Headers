/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:01 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AmazonServiceException : AmazonClientException {
	NSString* requestId; 
	NSString* errorCode; 
	NSString* serviceName; 
	int statusCode; 
	NSMutableDictionary* additionalFields; 
}
@property (nonatomic,retain) NSString* requestId; 
@property (nonatomic,retain) NSString* errorCode; 
@property (nonatomic,retain) NSString* serviceName; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,copy) NSMutableDictionary* additionalFields; 
+(id)exceptionWithStatusCode:(int)arg1;
+(id)exceptionWithMessage:(id)arg1 withErrorCode:(id)arg2 withStatusCode:(int)arg3 withRequestId:(id)arg4;
+(id)exceptionWithMessage:(id)arg1;
-(void)setPropertiesWithException:(id)arg1;
-(id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
-(void)dealloc;
-(id)description;
-(void)setRequestId:(id)arg1;
-(void)setStatusCode:(int)arg1;
-(void)setServiceName:(id)arg1;
-(void)setErrorCode:(id)arg1;
@end