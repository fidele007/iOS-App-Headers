/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:59 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNVenueTableViewCell : UITableViewCell {
	UIImageView* _venueType; 
	UILabel* _venueName; 
	UILabel* _venueAddress; 
}
@property (nonatomic,retain) UIImageView* venueType; 				//@synthesize venueType=_venueType - In the implementation block
@property (nonatomic,retain) UILabel* venueName; 				//@synthesize venueName=_venueName - In the implementation block
@property (nonatomic,retain) UILabel* venueAddress; 				//@synthesize venueAddress=_venueAddress - In the implementation block
-(void)setVenueType:(id)arg1;
-(void)setVenueAddress:(id)arg1;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setVenueName:(id)arg1;
-(void).cxx_destruct;
@end