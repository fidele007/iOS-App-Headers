/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:04 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNLoadMoreCell : UITableViewCell {
	BOOL _displaysMessage; 
	VNFontLabelMedium* _loadMoreText; 
	UIActivityIndicatorView* _activityView; 
}
@property (nonatomic,retain) VNFontLabelMedium* loadMoreText; 				//@synthesize loadMoreText=_loadMoreText - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView* activityView; 				//@synthesize activityView=_activityView - In the implementation block
@property (assign,nonatomic) BOOL displaysMessage; 				//@synthesize displaysMessage=_displaysMessage - In the implementation block
+(id)backgroundColor;
-(void)setDisplaysMessage:(BOOL)arg1;
-(void)setLoadMoreText:(id)arg1;
-(void)setActivityView:(id)arg1;
-(void)awakeFromNib;
-(void)setSelected:(BOOL)arg1;
-(void).cxx_destruct;
@end