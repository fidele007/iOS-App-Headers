/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:44 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGCameraNavigationControllerDelegate.h>
#import <IGActionSheetDelegate.h>
#import <IGTwitterProfilePictureDelegate.h>
#import <UIImagePickerControllerDelegate.h>

@interface IGProfilePictureHelper : NSObject <IGCameraNavigationControllerDelegate, IGActionSheetDelegate, IGTwitterProfilePictureDelegate, UIImagePickerControllerDelegate> {
	BOOL _showLocalOptionsOnly; 
	BOOL _showTwitter; 
	id<IGProfilePictureHelperDelegate> _delegate; 
	UIViewController* _viewController; 
	NSString* _twitterTokenString; 
	NSString* _twitterUsername; 
}
@property (assign,nonatomic,__weak) id<IGProfilePictureHelperDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController* viewController; 				//@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,copy) NSString* twitterTokenString; 				//@synthesize twitterTokenString=_twitterTokenString - In the implementation block
@property (nonatomic,copy) NSString* twitterUsername; 				//@synthesize twitterUsername=_twitterUsername - In the implementation block
@property (assign,nonatomic) BOOL showTwitter; 				//@synthesize showTwitter=_showTwitter - In the implementation block
-(void)actionSheetDismissedWithButtonTitled:(id)arg1;
-(void)facebookAuthDidFinish;
-(void)loadFacebookProfilePicture;
-(void)showActionSheet;
-(void)twitterLoggedOut:(id)arg1;
-(void)delegateDidFinishDownloadingProfilePicture:(id)arg1;
-(void)dismissCamera;
-(void)delegateWillStartDownloadingProfilePicture;
-(void)delegateDidFailDownloadingProfilePicture;
-(void)removeFacebookObserver;
-(void)onTwitterLoginCompleted:(id)arg1;
-(void)twitterLoginCancelled;
-(void)removeTwitterObserver;
-(void)loadTwitterProfilePicture;
-(BOOL)delegateShouldShowRemoveCurrentPicture;
-(void)delegateWillPerformAction:(int)arg1;
-(void)delegateRemovePictureButtonTapped;
-(void)presentCamera;
-(void)presentPhotoLibrary;
-(void)presentFacebookLogin;
-(void)presentTwitterLogin;
-(void)cameraControllerDidCancel;
-(void)cameraControllerDidFinishWithSelfie:(id)arg1;
-(void)imageTicketDidFinishWithData:(id)arg1;
-(void)imageTicketDidFail;
-(void)twitterProfilePictureFailed;
-(void)setTwitterTokenString:(id)arg1;
-(void)setTwitterUsername:(id)arg1;
-(void)setShowTwitter:(BOOL)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void)setViewController:(id)arg1;
-(void).cxx_destruct;
-(id)initWithViewController:(id)arg1;
@end