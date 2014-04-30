/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:12 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CLSWebRequest : NSObject {
	NSString* _method; 
	NSString* _path; 
	NSURL* _URL; 
	NSDictionary* _parameters; 
	NSMutableDictionary* _customHeaders; 
	NSMutableArray* _formFields; 
	id _protectionSpaceHandler; 
}
@property (nonatomic,copy) NSString* path; 				//@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSDictionary* parameters; 				//@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSURL* URL; 				//@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSURL* fullURL; 
@property (nonatomic,copy) NSURLRequest* URLRequest; 
@property (nonatomic,copy) NSString* method; 				//@synthesize method=_method - In the implementation block
@property (nonatomic,copy) id protectionSpaceHandler; 				//@synthesize protectionSpaceHandler=_protectionSpaceHandler - In the implementation block
+(id)requestWithMethod:(id)arg1 path:(id)arg2;
-(void)addValue:(id)arg1 forFormField:(id)arg2;
-(void)addData:(id)arg1 MIMEType:(id)arg2 fileName:(id)arg3 forFormField:(id)arg4;
-(id)initWithMethod:(id)arg1;
-(id)formData;
-(void)addFormRecord:(id)arg1;
-(void)addHeaders:(id)arg1;
-(void)setFormData:(id)arg1;
-(void)setProtectionSpaceHandler:(id)arg1;
-(void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2;
-(void)dealloc;
-(void)setPath:(id)arg1;
-(void)setURL:(id)arg1;
-(void)setParameters:(id)arg1;
-(void)setMethod:(id)arg1;
@end