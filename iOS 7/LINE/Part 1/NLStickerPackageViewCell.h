/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:14 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NLStickerPackageViewCell : UITableViewCell {
	unsigned _style; 
	unsigned _cellType; 
	UIImageView* _packageImageView; 
	UIImageView* _newImageView; 
	UILabel* _authorLabel; 
	UIImageView* _coinImage; 
	UILabel* _priceLabel; 
	UILabel* _eventExplanationLabel; 
	UILabel* _userNameLabel; 
	UIActivityIndicatorView* _act; 
	UIImageView* _animationStickerBadge; 
	UIImageView* _soudeStickerBadge; 
	BOOL _isNewlyReceivedGift; 
	LineProduct* _product; 
	int _priceTier; 
	UILabel* _dateLabel; 
	UILabel* _mainLabel; 
	UIImageView* _accessoryArrow; 
	UIButton* _downloadThisStickerButton; 
	UILabel* _readyToDownloadLabel; 
	NLStickerDownloadProgressView* _progressView; 
	int _ranking; 
	LineStickerPackage* _package; 
}
@property (assign,nonatomic) int priceTier; 				//@synthesize priceTier=_priceTier - In the implementation block
@property (nonatomic,retain) UILabel* dateLabel; 				//@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) UILabel* mainLabel; 				//@synthesize mainLabel=_mainLabel - In the implementation block
@property (nonatomic,retain) UIImageView* accessoryArrow; 				//@synthesize accessoryArrow=_accessoryArrow - In the implementation block
@property (nonatomic,retain) UIButton* downloadThisStickerButton; 				//@synthesize downloadThisStickerButton=_downloadThisStickerButton - In the implementation block
@property (nonatomic,retain) UILabel* readyToDownloadLabel; 				//@synthesize readyToDownloadLabel=_readyToDownloadLabel - In the implementation block
@property (nonatomic,retain) NLStickerDownloadProgressView* progressView; 				//@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic) int ranking; 				//@synthesize ranking=_ranking - In the implementation block
@property (nonatomic,retain) LineStickerPackage* package; 				//@synthesize package=_package - In the implementation block
@property (nonatomic,retain) LineProduct* product; 				//@synthesize product=_product - In the implementation block
+(float)heightForStyle:(unsigned)arg1;
-(void)setMainLabel:(id)arg1;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 stickerCellStyle:(unsigned)arg3 cellType:(unsigned)arg4;
-(void)setRanking:(int)arg1;
-(id)getSinglePixelWithColor:(id)arg1;
-(void)setPriceTier:(int)arg1;
-(void)setupBackground:(unsigned)arg1;
-(void)setupComponents;
-(void)setAnimationSoundStickerBadge;
-(void)addBorderAtBottomOfView:(id)arg1;
-(void)setIsNewlyReceivedGift:(BOOL)arg1;
-(void)setAccessoryArrow:(id)arg1;
-(void)setDownloadThisStickerButton:(id)arg1;
-(void)setReadyToDownloadLabel:(id)arg1;
-(void)setPackage:(id)arg1;
-(void)setDateLabel:(id)arg1;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
-(void)prepareForReuse;
-(void)setProgressView:(id)arg1;
-(void)setProduct:(id)arg1;
-(void).cxx_destruct;
@end