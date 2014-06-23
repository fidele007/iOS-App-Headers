/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:38 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineSnsFriendContactRegistration : NSObject {
	LineContact* __contact; 
	int __snsIdType; 
	NSString* __snsUserId; 
	struct {
		unsigned int snsIdType:1;
	} __isSet; 
}
@property (nonatomic,retain) LineContact* contact; 				//@synthesize _contact=__contact - In the implementation block
@property (assign,nonatomic) int snsIdType; 				//@synthesize _snsIdType=__snsIdType - In the implementation block
@property (nonatomic,retain) NSString* snsUserId; 				//@synthesize _snsUserId=__snsUserId - In the implementation block
-(void)read:(id)arg1;
-(void)setSnsUserId:(id)arg1;
-(void)setSnsIdType:(int)arg1;
-(void)setContact:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end