/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:34 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSXMLParserDelegate.h>
#import <UIWebViewDelegate.h>

@interface AdXTracking : NSObject <NSXMLParserDelegate, UIWebViewDelegate> {
	BOOL _Is_upgrade; 
	BOOL _advertisingTrackingEnabled; 
	BOOL _OptOut; 
	BOOL _hasASIdentifierManager; 
	NSString* _URLScheme; 
	NSString* _ClientId; 
	NSString* _AppleId; 
	NSString* _BundleID; 
	NSString* _CountryCode; 
	NSString* _UserAgent; 
	NSString* _IDFV; 
	NSString* _currentElement; 
	NSString* _advertisingIdentifier; 
	NSMutableDictionary* _dict; 
	NSMutableArray* _productArray; 
	NSDate* _connectionStartTime; 
	UIWebView* _uAwebView; 
	NSMutableString* _referral; 
	NSMutableString* _clickID; 
	ASIdentifierManager* _identifierManager; 
	NSString* _attributionID; 
	NSString* _serverIP; 
	NSString* _serverIP_Q; 
	int _seencount; 
	NSOperationQueue* _networkQueue; 
	int _iAd; 
}
@property (nonatomic,retain) NSString* URLScheme; 				//@synthesize URLScheme=_URLScheme - In the implementation block
@property (nonatomic,retain) NSString* ClientId; 				//@synthesize ClientId=_ClientId - In the implementation block
@property (nonatomic,retain) NSString* AppleId; 				//@synthesize AppleId=_AppleId - In the implementation block
@property (nonatomic,retain) NSString* BundleID; 				//@synthesize BundleID=_BundleID - In the implementation block
@property (nonatomic,retain) NSString* CountryCode; 				//@synthesize CountryCode=_CountryCode - In the implementation block
@property (assign) BOOL Is_upgrade; 				//@synthesize Is_upgrade=_Is_upgrade - In the implementation block
@property (nonatomic,retain) NSString* UserAgent; 				//@synthesize UserAgent=_UserAgent - In the implementation block
@property (nonatomic,retain) NSString* IDFV; 				//@synthesize IDFV=_IDFV - In the implementation block
@property (nonatomic,retain) NSString* currentElement; 				//@synthesize currentElement=_currentElement - In the implementation block
@property (nonatomic,retain) NSString* advertisingIdentifier; 				//@synthesize advertisingIdentifier=_advertisingIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary* dict; 				//@synthesize dict=_dict - In the implementation block
@property (nonatomic,retain) NSMutableArray* productArray; 				//@synthesize productArray=_productArray - In the implementation block
@property (nonatomic,retain) NSDate* connectionStartTime; 				//@synthesize connectionStartTime=_connectionStartTime - In the implementation block
@property (nonatomic,retain) UIWebView* uAwebView; 				//@synthesize uAwebView=_uAwebView - In the implementation block
@property (nonatomic,retain) NSMutableString* referral; 				//@synthesize referral=_referral - In the implementation block
@property (nonatomic,retain) NSMutableString* clickID; 				//@synthesize clickID=_clickID - In the implementation block
@property (nonatomic,retain) ASIdentifierManager* identifierManager; 				//@synthesize identifierManager=_identifierManager - In the implementation block
@property (nonatomic,retain) NSString* attributionID; 				//@synthesize attributionID=_attributionID - In the implementation block
@property (nonatomic,retain) NSString* serverIP; 				//@synthesize serverIP=_serverIP - In the implementation block
@property (nonatomic,retain) NSString* serverIP_Q; 				//@synthesize serverIP_Q=_serverIP_Q - In the implementation block
@property (assign) int seencount; 				//@synthesize seencount=_seencount - In the implementation block
@property (assign) BOOL advertisingTrackingEnabled; 				//@synthesize advertisingTrackingEnabled=_advertisingTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL OptOut; 				//@synthesize OptOut=_OptOut - In the implementation block
@property (assign,nonatomic) BOOL hasASIdentifierManager; 				//@synthesize hasASIdentifierManager=_hasASIdentifierManager - In the implementation block
@property (nonatomic,retain) NSOperationQueue* networkQueue; 				//@synthesize networkQueue=_networkQueue - In the implementation block
@property (assign) int iAd; 				//@synthesize iAd=_iAd - In the implementation block
-(BOOL)handleOpenURL:(id)arg1;
-(void)setIs_upgrade:(BOOL)arg1;
-(void)setCurrentElement:(id)arg1;
-(void)setConnectionStartTime:(id)arg1;
-(void)setAdvertisingIdentifier:(id)arg1;
-(void)setUAwebView:(id)arg1;
-(void)setReferral:(id)arg1;
-(void)setClickID:(id)arg1;
-(void)setOptOut:(BOOL)arg1;
-(void)setSeencount:(int)arg1;
-(void)setAdvertisingTrackingEnabled:(BOOL)arg1;
-(void)setIAd:(int)arg1;
-(void)setProductArray:(id)arg1;
-(void)setNetworkQueue:(id)arg1;
-(void)setIDFV:(id)arg1;
-(void)setServerIP:(id)arg1;
-(void)setServerIP_Q:(id)arg1;
-(void)setHasASIdentifierManager:(BOOL)arg1;
-(void)setIdentifierManager:(id)arg1;
-(void)reportAppEventToAdX:(id)arg1;
-(void)reportExtendedEventToAdX:(id)arg1;
-(id)getOldDID;
-(id)odin1;
-(void)reportAppOpenToAdX:(_Bool)arg1;
-(id)adXGetBundleID;
-(BOOL)parseResponse:(id)arg1;
-(id)urlEncode:(id)arg1;
-(void)setAttributionID:(id)arg1;
-(void)doReportAppOpen;
-(BOOL)recentSwish;
-(int)swishAttempts;
-(BOOL)connectedToNetwork;
-(BOOL)addSkipBackupAttributeToItemAtURL:(id)arg1;
-(void)reportAppOpenToAdXNow;
-(void)checkForiAdConversion;
-(BOOL)doSwish;
-(void)sendEvent:(id)arg1 withData:(id)arg2;
-(void)sendEvent:(id)arg1 withData:(id)arg2 andCurrency:(id)arg3;
-(void)sendEvent:(id)arg1 withData:(id)arg2 andCurrency:(id)arg3 andCustomData:(id)arg4;
-(void)sendAndValidateSaleEvent:(id)arg1 withValue:(id)arg2 andCurrency:(id)arg3 andCustomData:(id)arg4;
-(void)sendExtendedEvent:(int)arg1;
-(void)sendExtendedEventOfName:(id)arg1;
-(void)startNewEvent;
-(void)setEventParameter:(int)arg1 withValue:(id)arg2;
-(void)setEventParameterOfName:(id)arg1 withValue:(id)arg2;
-(void)addProductToList:(id)arg1;
-(void)addProductToList:(id)arg1 ofPrice:(float)arg2 forQuantity:(int)arg3;
-(id)getReferral;
-(id)getDLReferral;
-(int)isFirstInstall;
-(id)getTransactionID;
-(id)getAdXDeviceIDForEvents;
-(void)isUpgrade:(BOOL)arg1;
-(void)useQAServerUntilYear:(int)arg1 month:(int)arg2 day:(int)arg3;
-(void)reportAppOpen;
-(void)setURLScheme:(id)arg1;
-(void)setAppleId:(id)arg1;
-(void)parser:(id)arg1 foundCDATA:(id)arg2;
-(void)parser:(id)arg1 foundCharacters:(id)arg2;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
-(id)init;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
-(void)setClientId:(id)arg1;
-(id)macAddress;
-(void)setUserAgent:(id)arg1;
-(void)setCountryCode:(id)arg1;
-(void)setDict:(id)arg1;
-(void)setBundleID:(id)arg1;
-(void).cxx_destruct;
@end