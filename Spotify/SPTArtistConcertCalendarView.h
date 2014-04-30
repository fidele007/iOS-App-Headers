/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:52 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTThemableView.h>

@interface SPTArtistConcertCalendarView : UIView <SPTThemableView> {
	id<SPTThemableViewLayoutDelegate> _layoutDelegate; 
	NSDate* _concertDate; 
	CALayer* _headerLayer; 
	UILabel* _headerLabel; 
	CALayer* _bodyLayer; 
	UILabel* _bodyLabel; 
}
@property (nonatomic,retain) NSDate* concertDate; 				//@synthesize concertDate=_concertDate - In the implementation block
@property (nonatomic,retain) CALayer* headerLayer; 				//@synthesize headerLayer=_headerLayer - In the implementation block
@property (nonatomic,retain) UILabel* headerLabel; 				//@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) CALayer* bodyLayer; 				//@synthesize bodyLayer=_bodyLayer - In the implementation block
@property (nonatomic,retain) UILabel* bodyLabel; 				//@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate; 				//@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(id)calendarWithDate:(id)arg1 ofSize:(CGSize)arg2;
-(void)applyThemeLayout;
-(void)setLayoutDelegate:(id)arg1;
-(id)initWithDate:(id)arg1 size:(CGSize)arg2;
-(void)configureDate;
-(void)setConcertDate:(id)arg1;
-(void)setHeaderLayer:(id)arg1;
-(void)setBodyLayer:(id)arg1;
-(void)setBodyLabel:(id)arg1;
-(void)setHeaderLabel:(id)arg1;
-(void)layoutSubviews;
-(void).cxx_destruct;
@end