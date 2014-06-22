/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:25 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGCommentActionView : UIView {
	int _deleteButtonType; 
	id<IGCommentActionViewDelegate> _delegate; 
	UIButton* _replyButton; 
	UIButton* _deleteButton; 
}
@property (assign,nonatomic) int deleteButtonType; 				//@synthesize deleteButtonType=_deleteButtonType - In the implementation block
@property (assign,nonatomic,__weak) id<IGCommentActionViewDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) float maxWidth; 
@property (nonatomic,retain) UIButton* replyButton; 				//@synthesize replyButton=_replyButton - In the implementation block
@property (nonatomic,retain) UIButton* deleteButton; 				//@synthesize deleteButton=_deleteButton - In the implementation block
-(void)replyButtonTapped:(id)arg1;
-(void)setDeleteButtonType:(int)arg1;
-(void)setReplyButton:(id)arg1;
-(void)setDeleteButton:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)setDelegate:(id)arg1;
-(void)deleteButtonTapped:(id)arg1;
-(void).cxx_destruct;
@end