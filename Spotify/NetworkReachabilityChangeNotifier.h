/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:42 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface NetworkReachabilityChangeNotifier : NSObject {
	struct ConnectivityManager* _connectivityManager; 
}
-(id)initWithConnectivityManager:(struct ConnectivityManager*)arg1;
-(void)networkReachabilityChanged;
-(void)dealloc;
@end