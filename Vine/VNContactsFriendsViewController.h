/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 2:45:33 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNContactsFriendsViewController : VNSocialNetworkViewController {
	VNAddressBookService* _addressBookService; 
}
@property (nonatomic,retain) VNAddressBookService* addressBookService; 				//@synthesize addressBookService=_addressBookService - In the implementation block
-(void)connectButtonTapped:(id)arg1;
-(void)setAddressBookService:(id)arg1;
-(void)load:(BOOL)arg1;
-(void)reloadData;
-(id)init;
-(void)viewDidLoad;
-(void)stopLoading:(BOOL)arg1;
-(void).cxx_destruct;
@end