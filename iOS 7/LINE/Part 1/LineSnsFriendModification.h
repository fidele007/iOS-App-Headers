/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:04 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineSnsFriendModification : NSObject {
	int __type; 
	LineSnsFriend* __snsFriend; 
	struct {
		unsigned int type:1;
	} __isSet; 
}
@property (assign,nonatomic) int type; 				//@synthesize _type=__type - In the implementation block
@property (nonatomic,retain) LineSnsFriend* snsFriend; 				//@synthesize _snsFriend=__snsFriend - In the implementation block
-(void)read:(id)arg1;
-(void)setSnsFriend:(id)arg1;
-(void)setType:(int)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end