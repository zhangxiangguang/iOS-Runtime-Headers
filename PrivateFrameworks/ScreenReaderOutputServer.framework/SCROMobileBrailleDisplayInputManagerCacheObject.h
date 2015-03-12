/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSBundle, NSMutableArray, NSMutableDictionary, NSString;

@interface SCROMobileBrailleDisplayInputManagerCacheObject : NSObject {
    int _brailleInputMode;
    NSBundle *_bundle;
    NSMutableDictionary *_commandDictionary;
    NSString *_driverIdentifier;
    NSString *_modelIdentifier;
    NSMutableArray *_orderedIdentifiers;
}

@property int brailleInputMode;
@property(retain) NSBundle * bundle;
@property(retain) NSMutableDictionary * commandDictionary;
@property(retain) NSString * driverIdentifier;
@property(retain) NSString * modelIdentifier;
@property(retain) NSMutableArray * orderedIdentifiers;

- (int)brailleInputMode;
- (id)bundle;
- (id)commandDictionary;
- (void)dealloc;
- (id)driverIdentifier;
- (id)modelIdentifier;
- (id)orderedIdentifiers;
- (void)setBrailleInputMode:(int)arg1;
- (void)setBundle:(id)arg1;
- (void)setCommandDictionary:(id)arg1;
- (void)setDriverIdentifier:(id)arg1;
- (void)setModelIdentifier:(id)arg1;
- (void)setOrderedIdentifiers:(id)arg1;

@end