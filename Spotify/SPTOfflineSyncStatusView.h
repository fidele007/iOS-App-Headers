/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:39 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPTOfflineSyncStatusView : UIView {
	BOOL _requiresIconUpdate; 
	unsigned _status; 
	UIImageView* _imageView; 
	UIActivityIndicatorView* _activityIndicator; 
}
@property (assign,nonatomic) unsigned status; 				//@synthesize status=_status - In the implementation block
@property (nonatomic,retain) UIImageView* imageView; 				//@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView* activityIndicator; 				//@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) BOOL requiresIconUpdate; 				//@synthesize requiresIconUpdate=_requiresIconUpdate - In the implementation block
+(id)offlineSyncStatusView;
-(void)setRequiresIconUpdate:(BOOL)arg1;
-(void)layoutSubviews;
-(void)setImageView:(id)arg1;
-(void)setStatus:(unsigned)arg1;
-(void)setActivityIndicator:(id)arg1;
-(void).cxx_destruct;
@end