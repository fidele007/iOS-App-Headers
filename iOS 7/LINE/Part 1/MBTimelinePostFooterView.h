/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:16:15 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MBTimelinePostFooterView : MBBaseChildCellView {
	MBActivity* mActivity; 
	int mPostViewType; 
	UIImageView* mBackgroundView; 
	MBPostFeedbackView* mPostFeedbackView; 
	MBPostFeedbackCountView* mPostFeedbackCountView; 
}
+(float)heightWithType:(int)arg1 activity:(id)arg2 width:(float)arg3;
-(void)setupWithType:(int)arg1 activity:(id)arg2;
-(void)setCellData:(id)arg1;
-(void).cxx_destruct;
@end