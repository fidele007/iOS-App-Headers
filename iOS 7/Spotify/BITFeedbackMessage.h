/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:18:55 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface BITFeedbackMessage : NSObject {
	BOOL _userMessage; 
	NSString* _text; 
	NSString* _userID; 
	NSString* _name; 
	NSString* _email; 
	NSDate* _date; 
	NSNumber* _id; 
	NSString* _token; 
	int _status; 
}
@property (nonatomic,copy) NSString* text; 				//@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString* userID; 				//@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString* name; 				//@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString* email; 				//@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSDate* date; 				//@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSNumber* id; 				//@synthesize id=_id - In the implementation block
@property (nonatomic,copy) NSString* token; 				//@synthesize token=_token - In the implementation block
@property (assign,nonatomic) int status; 				//@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL userMessage; 				//@synthesize userMessage=_userMessage - In the implementation block
-(void)setUserMessage:(BOOL)arg1;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)init;
-(void)setName:(id)arg1;
-(void)setText:(id)arg1;
-(void)setDate:(id)arg1;
-(void)setStatus:(int)arg1;
-(void)setEmail:(id)arg1;
-(void)setUserID:(id)arg1;
-(void)setToken:(id)arg1;
-(void)setId:(id)arg1;
-(void).cxx_destruct;
@end