/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:09:48 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineProximityMatchCandidateEntry : NSObject {
	LineContact* __contact; 
	LineBuddyDetail* __buddyDetail; 
	struct {
	} __isSet; 
}
@property (nonatomic,retain) LineContact* contact; 				//@synthesize _contact=__contact - In the implementation block
@property (nonatomic,retain) LineBuddyDetail* buddyDetail; 				//@synthesize _buddyDetail=__buddyDetail - In the implementation block
-(void)read:(id)arg1;
-(void)setBuddyDetail:(id)arg1;
-(void)setContact:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end