/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKEnterValueNewBalanceView : UIView {
    NSDecimalNumber * _additionalAmount;
    NSDecimalNumber * _cardBalance;
    NSString * _currencyCode;
    NSDecimalNumber * _maxAmount;
    UILabel * _newBalanceAmount;
    UILabel * _newBalancePrompt;
}

@property (nonatomic, copy) NSDecimalNumber *cardBalance;
@property (nonatomic, copy) NSDecimalNumber *maxAmount;

- (void).cxx_destruct;
- (void)_addSubviews;
- (void)_updateBalanceText;
- (void)addAmountToBalance:(id)arg1;
- (id)cardBalance;
- (id)init;
- (id)initWithCurrencyCode:(id)arg1;
- (void)layoutSubviews;
- (id)maxAmount;
- (void)setCardBalance:(id)arg1;
- (void)setMaxAmount:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end