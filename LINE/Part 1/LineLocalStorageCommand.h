/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:13 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineLocalStorageCommand : CDVPlugin {
	struct dispatch_queue_s* executeQueue_; 
	NSString* storagePath; 
}
@property (nonatomic,retain) NSString* storagePath; 
+(id)localStorageURL;
-(void)cleanupLocalStorage;
-(id)stringForObject:(id)arg1;
-(id)currentDBPath;
-(id)openedDBForKey:(id)arg1;
-(id)executeSqlWithQueryString:(id)arg1 bindingParamters:(id)arg2;
-(void)addOpenedDB:(id)arg1 forKey:(id)arg2;
-(BOOL)tryToOpenLocalStorage;
-(void)createKeyValueTableIfNotExists;
-(void)removeOpenedDBForKey:(id)arg1;
-(void)asyncExecuteSqlWithQueryString:(id)arg1 bindingParamters:(id)arg2 usingFinishedBlock:(id)arg3;
-(BOOL)isExistsForKey:(id)arg1;
-(BOOL)setItemValue:(id)arg1 forKey:(id)arg2;
-(void)closeAllLocalStorages;
-(void)onAppTerminate;
-(void)closeAllLocalStoragesExceptMe;
-(void)onMemoryWarning;
-(BOOL)closeLocalStorage;
-(BOOL)checkLocalStorage;
-(void)notifyResultWithSuccessResult:(int)arg1 resultAsArray:(id)arg2 toCallbackID:(id)arg3;
-(void)requestKeysWhenFinishBlock:(id)arg1;
-(void)notifyResultWithSuccessResult:(int)arg1 messageString:(id)arg2 toCallbackID:(id)arg3;
-(void)setItemsFromKeyValueArray:(id)arg1 whenFinishBlock:(id)arg2 errorBlock:(id)arg3;
-(void)requestGetItemValueForKey:(id)arg1 whenFinishBlock:(id)arg2;
-(void)requestRemoveItemValueForKey:(id)arg1 whenFinishBlock:(id)arg2;
-(void)requestCheckExistenceForKey:(id)arg1 whenFinishBlock:(id)arg2;
-(void)clearAllKeyValuesWhenFinishBlock:(id)arg1;
-(void)notifyResultWithSuccessResult:(int)arg1 resultAsString:(id)arg2 toCallbackID:(id)arg3;
-(void)keys:(id)arg1 withDict:(id)arg2;
-(void)setItems:(id)arg1 withDict:(id)arg2;
-(void)getItems:(id)arg1 withDict:(id)arg2;
-(void)removeItems:(id)arg1 withDict:(id)arg2;
-(void)existsItem:(id)arg1 withDict:(id)arg2;
-(void)clearItems:(id)arg1 withDict:(id)arg2;
-(void)dealloc;
-(id)initWithWebView:(id)arg1;
-(void)setStoragePath:(id)arg1;
-(void).cxx_destruct;
@end