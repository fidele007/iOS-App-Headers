/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:15:08 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLThemeSettingsCell : UITableViewCell {
	NLFrameImageView* _thumbNailImageView; 
	UIView* _borderLine; 
	UILabel* _titleLabel; 
	UILabel* _durationLabel; 
	UIButton* _applyButton; 
	UIButton* _downloadButton; 
	UIButton* _updateButton; 
	UIImageView* _arrowImageView; 
	LineShopProductDetail* _productDetail; 
	UIView* _dividerViewOnTop; 
	NLStickerDownloadProgressView* _progressBar; 
	id _updateBlock; 
	id _applyBlock; 
	id _downloadBlock; 
	id _cancelBlock; 
	MyProductObject* _productObject; 
}
@property (nonatomic,retain) UIView* dividerViewOnTop; 				//@synthesize dividerViewOnTop=_dividerViewOnTop - In the implementation block
@property (nonatomic,copy) NLStickerDownloadProgressView* progressBar; 				//@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,copy) UIButton* applyButton; 				//@synthesize applyButton=_applyButton - In the implementation block
@property (nonatomic,copy) UIButton* downloadButton; 				//@synthesize downloadButton=_downloadButton - In the implementation block
@property (nonatomic,copy) id updateBlock; 				//@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) id applyBlock; 				//@synthesize applyBlock=_applyBlock - In the implementation block
@property (nonatomic,copy) id downloadBlock; 				//@synthesize downloadBlock=_downloadBlock - In the implementation block
@property (nonatomic,copy) id cancelBlock; 				//@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,retain) MyProductObject* productObject; 				//@synthesize productObject=_productObject - In the implementation block
-(void)setCancelBlock:(id)arg1;
-(void)setProductObject:(id)arg1;
-(void)setDownloadBlock:(id)arg1;
-(void)setUpdateBlock:(id)arg1;
-(void)setApplyBlock:(id)arg1;
-(id)dividerViewOn:(CGPoint)arg1;
-(void)downloadTheme;
-(void)applyTheme;
-(void)updateTheme;
-(void)cancelTheme;
-(void)setDividerViewOnTop:(id)arg1;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
-(id)productID;
-(void).cxx_destruct;
@end