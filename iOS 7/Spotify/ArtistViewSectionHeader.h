/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:22:00 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ArtistViewSectionHeader : ArtistViewSection {
	int _identifier; 
}
@property (assign,nonatomic) int identifier; 				//@synthesize identifier=_identifier - In the implementation block
-(float)heightForHeader;
-(float)heightForRow:(int)arg1;
-(void)setIdentifier:(int)arg1;
-(int)numberOfRowsInSection;
@end