/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:35 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NLStickerDownloadDelegate.h>
#import <StickerDownloadProgressDelegate.h>

@interface NLStickerDownloadManager : NSObject <NLStickerDownloadDelegate, StickerDownloadProgressDelegate> {
	NSMutableArray* delegates; 
	NSMutableArray* failedPackages; 
	NSMutableDictionary* progressViews; 
	NSMutableArray* _downloadingPackages; 
}
@property (nonatomic,retain) NSMutableArray* delegates; 
@property (nonatomic,retain) NSMutableArray* downloadingPackages; 				//@synthesize downloadingPackages=_downloadingPackages - In the implementation block
@property (nonatomic,retain) NSMutableArray* failedPackages; 
@property (nonatomic,retain) NSMutableDictionary* progressViews; 
+(void)line_notifyDownloadedWithDownloadPackage:(id)arg1 statusCallback:(id)arg2;
+(id)allocWithZone:(NSZone*)arg1;
+(id)sharedManager;
-(void)setProgressViews:(id)arg1;
-(void)deleteDownloadPackage:(id)arg1;
-(void)stickerPackageDownloadStarted:(id)arg1;
-(void)stickerPackageJustDownloadEnded:(id)arg1;
-(void)stickerPackage:(id)arg1 downloaded:(float)arg2;
-(void)stickerPackageDownloadSuccess:(id)arg1;
-(void)stickerPackageDownloadCanceled:(id)arg1;
-(void)stickerPackageDownloadFailed:(id)arg1;
-(id)addDownloadPackage:(id)arg1;
-(id)progressViewWithPackage:(id)arg1;
-(id)createProgressViewWithPackage:(id)arg1;
-(BOOL)isStickerDownloading;
-(void)resumeFailedPacakge;
-(void)cancelAllDownloadPackage;
-(id)downloadPackage:(id)arg1 progressBlock:(id)arg2 completionBlock:(id)arg3;
-(void)setDelegates:(id)arg1;
-(void)setDownloadingPackages:(id)arg1;
-(void)setFailedPackages:(id)arg1;
-(id)fileDownloadPackage:(id)arg1;
-(id)verificationBlock:(id)arg1 versionDownloading:(unsigned)arg2;
-(id)addDownloadPackage:(id)arg1 progressBlock:(id)arg2 completionBlock:(id)arg3;
-(id)packageWithProgressView:(id)arg1;
-(id)progressViewWithPackageID:(long long)arg1;
-(void)cancelButtonTapped:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1;
-(void).cxx_destruct;
-(void)addDelegate:(id)arg1;
-(void)removeDelegate:(id)arg1;
@end