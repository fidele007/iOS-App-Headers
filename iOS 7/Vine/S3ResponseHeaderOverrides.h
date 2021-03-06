/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:13 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3ResponseHeaderOverrides : NSObject {
	NSString* contentType; 
	NSString* contentLanguage; 
	NSString* expires; 
	NSString* cacheControl; 
	NSString* contentDisposition; 
	NSString* contentEncoding; 
}
@property (nonatomic,retain) NSString* contentType; 
@property (nonatomic,retain) NSString* contentLanguage; 
@property (nonatomic,retain) NSString* expires; 
@property (nonatomic,retain) NSString* cacheControl; 
@property (nonatomic,retain) NSString* contentDisposition; 
@property (nonatomic,retain) NSString* contentEncoding; 
@property (nonatomic,copy) NSString* queryString; 
-(void)setCacheControl:(id)arg1;
-(void)setExpires:(id)arg1;
-(void)setContentDisposition:(id)arg1;
-(void)setContentEncoding:(id)arg1;
-(void)setContentLanguage:(id)arg1;
-(void)dealloc;
-(void)setContentType:(id)arg1;
@end