/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:29 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol ProfileViewModelDelegate
@optional
-(void)viewModel(id):arg1 followUpdateDidFailWithError(id):arg2 ;
-(void)viewModel(id):arg1 playerStateDidChange(id):arg2 ;
@required
-(void)viewModel(id):arg1 didUpdateFollowData(id):arg2 ;
-(void)viewModel(id):arg1 didUpdateFollowData(id):arg2 ;
@end

@protocol ProfileHeaderViewDelegate
@required
-(void)didTapHeaderButtonWithType(unsigned):arg1 ;
-(void)didTapFollowButton(id):arg1 ;
-(void)didTapHeaderButtonWithType(unsigned):arg1 ;
-(void)didTapFollowButton(id):arg1 ;
@end

@protocol ProfileCountsViewDelegate
@required
-(void)didTapHeaderCountsButtonWithType(unsigned):arg1 ;
-(void)didTapHeaderCountsButtonWithType(unsigned):arg1 ;
@end
