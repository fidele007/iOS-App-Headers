/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:41 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MBFeedbackButton : UIButton {
	int mType; 
	int mCount; 
	MBActivity* mActivity; 
}
+(id)numberFont;
+(id)feedbackButtonWithType:(int)arg1;
-(CGSize)preferredSizeThatFits:(CGSize)arg1;
-(void)drawCellData;
-(void)setCellData:(id)arg1;
-(void)changedLikeActive:(id)arg1;
-(void)drawCellTitleByCount:(int)arg1 withMaxCount:(int)arg2 withPrintCount:(int)arg3;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 type:(int)arg2;
-(void).cxx_destruct;
@end